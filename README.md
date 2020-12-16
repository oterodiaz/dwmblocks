# dwmblocks
Modular status bar for `dwm` written in C.

# Configuration
Much like `dwm`, `dwmblocks` is configured by modifying blocks.def.h (or blocks.h) and recompiling the source code

# Modules
`dwmblocks` gets its info from shell scripts. Modules can get updated in a certain period of time or by sending a signal to them.
You can find my scripts [here](https://gitlab.com/Nero20/dotfiles-linux/-/tree/master/Scripts/dwmblocks). (Thanks to Distrotube for some of the scripts)

### Signaling
Once you have assigned a signal to a specific module in the blocks.def.h (or blocks.h) file, you can signal `dwmblocks` by running:

`kill -{signal_number + 34} $(pidof dwmblocks)`

Or, for fish users:

`kill -{signal_number + 34} (pidof dwmblocks)`

For example, if I wanted to send the signal 10 to `dwmblocks`, I would run

`kill -44 $(pidof dwmblocks)`

Note: If you want modules to never update on their own, set their time to 0.

# Installation
### Clone this repository
HTTPS:

`git clone https://gitlab.com/nero20/dwmblocks`

SSH:

`git clone git@gitlab.com:Nero20/dwmblocks.git`

### Go into the folder
`cd dwmblocks`

### Build and install
This requires root privileges and will install to /usr/local/bin/dwm

`make`

`sudo make install`

Or, you can run the following "script" instead, which will clean up after building and installing

`./install.sh`

Note: the install.sh "script" removes blocks.h since I prefer using blocks.def.h. Modify it accordingly if you use blocks.h instead.

