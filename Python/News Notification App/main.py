import getnews
import time
from winotify import Notification


newslist = getnews.getnews()

print(newslist)

articles = []

for article in newslist["articles"]:
    format_articles = {"title": article["title"], "description": article["description"], "url": article["url"]}
    articles.append(format_articles)


print(articles)


for article in articles:
    message = f"{article["title"]}"
    url = f"{article["url"]}"
    toast = Notification(app_id="News", title="News Alert", msg=message, duration="short")
    toast.add_actions(label="Read More", launch=url)
    toast.show()
    time.sleep(15)
