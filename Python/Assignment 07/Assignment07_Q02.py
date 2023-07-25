import json
import urllib.request
handle=urllib.request.urlopen("https://earthquake.usgs.gov/earthquakes/feed/v1.0/summary/4.5_month.geojson")
data=handle.read()
eData=json.loads(data)
def places(earthquakeData):
    earthquakes=earthquakeData.get("features")
    for i in range(0,10):
        earthquake=earthquakes[i]
        properties=earthquake.get("properties")
        place=properties.get("place")
        print(place)
places(eData)
