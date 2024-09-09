import json
import requests
from pywebio.output import *
from pywebio.session import *


def funfact():
    clear()

    put_html("<p align=""left""><h2><img src=""https://icons.iconarchive.com/icons/icons8/windows-8/256/Messaging-Happy-icon.png"" width=""7%"">  \
             Fun Fact Generator</h2></p>")

    url = "https://uselessfacts.jsph.pl/random.json?language=en"

    facts = requests.request("GET", url)
    data = json.loads(facts.text)
    fun_fact = data["text"]

    style(put_text(fun_fact), 'color: blue; font-size: 30px')
    put_button(label="Click Me", onclick=funfact, color="outline-success")


if __name__ == '__main__':

    put_html("<p align=""left""><h2><img src=""https://icons.iconarchive.com/icons/icons8/windows-8/256/Messaging-Happy-icon.png"" width=""7%"">  \
             Fun Fact Generator</h2></p>")

    put_button(label="Click Me", onclick=funfact, color="outline-success")
    hold()
