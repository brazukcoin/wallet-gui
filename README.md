# Brazukcoin GUI Wallet

**Instructions for Linux:**

Install dependencies:

**~$** `sudo apt-get install git cmake build-essential libboost-all-dev qt5base5-dev`


Download Brazukcoin GUI Wallet's source code:

**~$** `git clone https://github.com/brazukcoin/brazukcoinwallet.git`


Change to GUI wallet's directory:

**~$** `cd brazukcoinwallet`


Create a 'build' subdirectory:

**~/brazukcoinwallet$** `mkdir -p build`


Change to 'build' directory:

**~/brazukcoinwallet$** `cd build`


Configure environment for compilation:

**~/brazukcoinwallet/build/$** `cmake ..`


Build the GUI wallet:

**~/brazukcoinwallet/build/$** `make`


Run the GUI wallet:

**~/brazukcoinwallet/build/$** `./Brazukcoin`



**Enjoy!**
