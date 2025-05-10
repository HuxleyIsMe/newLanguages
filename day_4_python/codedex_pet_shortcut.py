'''

I recently found CodeDex site, while the tutorials are a lil to simple for me, i really enjoy the aesthetics and the vibes. 
I really love there lil virtual pet feature. While i'd like to make my own, i think for now bebe steps
so i programmed this desktop  shortcut that has a custom image and on click will open up 
the browser onto the site.

i did this because i forgot to log a day of programming and that was upsetting, by having it on my desktop im more likely to see it.


'''


# importing os module for environment variables
import os
# importing necessary functions from dotenv library
from dotenv import load_dotenv, dotenv_values 
# loading variables from .env file
load_dotenv() 


import webbrowser
from pyshortcuts import make_shortcut

# URL to open
url = "https://www.codedex.io/@huxlux/30-nites-of-code?pet=eJPDeBrHnEc91A8VsHeM"
chrome_path = '/Applications/Google Chrome.app'

chromeController = webbrowser.get('chrome')

# Function to open the URL
def open_website():
    chromeController.open_new(url)

iconPath = os.getEnv("ICNS_PATHWAY_CODEX")


# Creating the shortcut
make_shortcut(
    script= os.getEnv("SCRIPT_PATHWAY_CODEX"),  # This script will be executed
    name='CodeDex_pet',    # Shortcut name
    description='Open CodeDex link',
    icon=iconPath           # You can specify an icon path here
)

# Run the function when the script is executed
if __name__ == "__main__":
    open_website()
