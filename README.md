
# Brazukcoin GUI Wallet


**Instructions for Linux:**

##### install dependencies
` ~**$** sudo apt-get update && sudo apt-get install git cmake build-essential libboost-all-dev `

##### download the main wallet
` ~**$** git clone https://github.com/brazukcoin/brazukcoin.git `

##### download the GUI wallet
` ~**$** git clone https://github.com/brazukcoin/brazukcoinwallet.git `

##### change to GUI wallet's directory
` ~**$** cd brazukcoinwallet/ `

##### create a shortcut to main wallet and, name that shortcut 'cryptonote'
` ~/brazukcoinwallet**$** ln -s ../brazukcoin cryptonote `

##### create a 'build' subdirectory
` ~/brazukcoinwallet**$** mkdir -p build `

##### change to 'build' directory
` ~/brazukcoinwallet**$** cd build/ `

##### configure environment for compilation
` ~/brazukcoinwallet/build/**$** cmake .. `

##### build the GUI wallet
` ~/brazukcoinwallet/build/**$** make `

##### run the GUI wallet
` ~/brazukcoinwallet/build/**$** ./Brazukcoin `


Enjoy!
