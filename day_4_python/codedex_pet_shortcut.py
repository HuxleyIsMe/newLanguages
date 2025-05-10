'''

I recently found CodeDex site, while the tutorials are a lil to simple for me, i really enjoy the aesthetics and the vibes. 
I really love there lil virtual pet feature. While i'd like to make my own, i think for now bebe steps
so i programmed this desktop  shortcut that has a custom image and on click will open up 
the browser onto the site.

i did this because i forgot to log a day of programming and that was upsetting, by having it on my desktop im more likely to see it.


'''

import os
from dotenv import load_dotenv, dotenv_values 
import webbrowser
from pyshortcuts import make_shortcut

load_dotenv() 

url = "https://www.codedex.io/@huxlux/30-nites-of-code?pet=eJPDeBrHnEc91A8VsHeM"
chrome_path = '/Applications/Google Chrome.app'

chromeController = webbrowser.get('chrome')

def open_website():
    chromeController.open_new(url)

iconPath = os.getEnv("ICNS_PATHWAY_CODEX")


make_shortcut(
    script= os.getEnv("SCRIPT_PATHWAY_CODEX"),  # you must place the absolute path to the location of the script, i.e. /Users/bob/project/thisFile.py
    name='CodeDex_pet',
    description='Open CodeDex link',
    icon=iconPath         # you must place the absolute path to the location of the script, i.e. /Users/bob/project/thisFile.py
)

# Run the function when the script is executed
if __name__ == "__main__":
    open_website()
