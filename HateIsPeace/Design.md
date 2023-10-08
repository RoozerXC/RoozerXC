# Hate is Peace: Open Design Docs
Hate is Peace is a first-person shooter sandbox game using Amnesia: The Dark Descent's engine. While the engine may be very unusual to work with for a first-person shooter game, I believe that it should be more appropriate and fit for the long run, as it has easy-to-use developer tools for modders and some documentation. Maybe it could be, who knows

# Characters
## Main
### Roozer
This is the main self-insert of Hate is Peace. Roozer is a powerless but brave young man, with blue hair and a suit. Usually, he is pretty introverted and no one really talks to him except Sarven and his friend Alice. He is around 5 feet and 4 inches tall, or 163 centimeters

### Sarven
A tall but wonderful demon with the heart of an angel, Sarven is Roozer's significant other. She can be used as a companion in single-player missions, to revive after dying, or to blow some steam off in the bedroom. She is around 7 feet and 3 inches tall, or 220 centimeters

### Alice
Alice is a weapons merchant and runs a store in the town, where she can be used to buy, sell and repair items, along with armor from Roozer's inventory. She is around 5 feet and 2 inches tall, or 157 centimeters

# For Devs & Modders
Hate is Peace utilizes a directory structure akin to that of Amnesia: The Dark Descent (because it uses the same engine duh):
- `addons` - User-created content, mods or Add-Ons
- `billboards` - Godray textures for lights
- `config` - Default game parameters and settings, as well as languages
- `core` - Information required to render the whole game along with test shapes and objects
- `fonts` - Information required to render the text on the screen
- `graphics` - 2D sprites that can be used to render HUD objects, as well as wallpapers
- `gui` - Information and 2D sprites required for the game's user interface
- `maps` - All the maps for Hate is Peace
- `models` - Models for characters, as well as weapons among other things
- `objects` - Quite literally, `static_objects` and `entities` combined into one folder
- `particles` - Particle effects for the game world
- `shaders` - Additional shaders for some in-game effects
- `sounds` - All the sound effects + the full music tracks/soundtrack
- `textures` - Cubemaps/Skyboxes, effects and water textures

The game also has the following developer tools. Most of them are WYSIWYG (What you see is what you get) editors:
- **(NEW)** `HpsEditor` - Block-based tool used to create, edit and save script files for maps 
- **(NEW)** `LangEditor` - Used to create, edit and save language files
- **(NEW)** `SntEditor` - Used to create, edit and save sound files
- **(NEW)** `SkinEditor` - Used to create, edit, and save gui/skin files
- `EntityEditor` - Used to create, edit and view entities/objects
- `EntityViewer` - Used to view and play around with entities
- `LevelEditor` - Used to create, edit and view maps/levels
- `LevelViewer` - Used to view maps/levels
- `MaterialEditor` - Used to create, edit and view texture maps for primitives or objects
- `ParticleEditor` - Used to create, edit and view particle effects

# Creation
These are the tools I use to craft Hate is Peace. All of them can be obtained by downloading, buying or pirating them if you're devious enough

## Code
- [Notepad++](https://notepad-plus-plus.org/) - for editing HPS/Lang/txt/etc. files
- [GitHub Desktop](https://desktop.github.com/) - for pushing code and commits
- [Visual Studio 2022](https://visualstudio.microsoft.com/vs/) - for editing the source code lol

## Graphics
- [Paint.net](https://getpaint.net/) - for creating, editing and saving textures/sprites

## Models
- [Blender](https://www.blender.org/) - this tool is mainly for sculpting meshes. All models must be exported to the OBJ file format
- Maya 2011 - This tool is for importing and rigging meshes which can be ready to use for the game. Legitimate copies of this specific version of Maya are incredibly hard to find, so I just use a cracked version anyway. Sorry and Thanks Autodesk :(

I use a plugin for Maya 2011 called OpenCOLLADA which can export models using the appropriate version of Collada/DAE; version 1.4.1 is highly recommended as newer versions tend to severely (and irreversibly, if you're not careful) corrupt animations upon export

## Sounds and Music
- [WavePad](https://www.nch.com.au/wavepad/index.html) - for creating, editing and saving sounds for Hate is Peace
- [Audacity](https://archive.org/details/audacity-2.4.2) - for editing sounds in ways that WavePad absolutely can't
- [FL Studio](https://www.image-line.com/) - for creating, editing and saving music tracks for Hate is Peace
