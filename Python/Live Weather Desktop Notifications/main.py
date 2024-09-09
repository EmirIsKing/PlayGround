import requests
from bs4 import BeautifulSoup
from winotify import Notification
url = "https://weather.com/en-IN/weather/today/l/618239879aa7a02e5da063fe417214dd0da12de7e92d10c2a8f6e8d89d6ed51c"


def get_html(link):
    r = requests.get(link)
    return r.text


htmldata = get_html(url)


soup = BeautifulSoup(htmldata, "html.parser")

degree = "°"
current_temp = soup.find('span', {'data-testid': 'TemperatureValue'}).contents[0]
current_sky = soup.find('div', {'data-testid': 'wxPhrase'}).text
temp = f"{current_temp}°"

result = f"Today's temperature is {temp} and the sky is {current_sky}"


toast = Notification(app_id="Weather Notification", title="Today's Weather", msg=f"{result}", duration="long", icon=r"C:\Users\PRO EMMA\Downloads\cloudy.png")
toast.add_actions(label="Read More", launch=url)
toast.show()
