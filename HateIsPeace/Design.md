# Hate is Peace: Open Design Docs

# Characters
## Main
### Roozer
This is the main self-insert, of course. Because i can't fucking write characters lol. Roozer is a powerless but brave young man, with blue hair and a suit. Usually, he is pretty introverted and he talks to no one but Sarven. He is around 5 feet and 4 inches tall, or 163 centimeters

### Sarven
A tall but wonderful demon with the heart of an angel, Sarven is Roozer's significant other. She can be used as a companion in single-player missions, to revive after dying, or to blow some steam off in the bedroom. She is around 6 feet and 6 inches tall, or 198 centimeters

# For devs & modders
Hate is Peace utilizes a directory structure akin to that of Amnesia: The Dark Descent (because it uses the same engine duh):
- `addons` - User-created content, mods or Add-Ons. Works similarly to the `custom_stories` folder
- `config` - Configuration files required to launch Hate is Peace and load its assets
- `core` - Where the data for the game is stored
    - `billboards` - Additive effects for casting godrays, including flares and halos
    - `fonts` - Bitmap fonts necessary to render text on the UI
    - `graphics` - Bitmap (TGA) graphics which contain gui/hud, in-game effects, playercards and screens
    - `gui` - Skins necessary to render the UI
    - `maps` - Can have one singular map file or a folder with its own entities, among other things
    - `models` - Includes player and weapon models
    - `shaders` - Additional glsl effects and shaders
    - `sounds` - Literally noises lol. Accompanied with a bunch of snt files. Also has music
    - `textures` - Includes backdrops, skyboxes, and other effects

Some WYSIWYG dev tools will be made:
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
