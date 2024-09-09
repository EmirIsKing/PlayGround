import requests
import json

def getnews():
    url = "https://newsapi.org/v2/top-headlines?country=us&apiKey=ab4ba6a94140449e8461d7559a55c020"

    newsEL = requests.get(url)

    newslist = newsEL.json()

   # print(newslist)
    return newslist

'''
if __name__ in "__main__":
    getnews()
    '''