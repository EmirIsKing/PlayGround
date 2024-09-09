import socket

HOST = 'localhost'
PORT = 7890

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind((HOST, PORT))

server.listen(5)
while True:
    comm_socket, address = server.accept()
    print(f"Connected to {address}")
    message = comm_socket.recv(1024).decode("utf-8")
    print(f"Message from client is: {message}")
    comm_socket.send(f"Got your message".encode('utf-8'))
    comm_socket.close()
    print(f"Connection with {address} ended")