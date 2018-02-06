# Brazukcoin - true anonymous currency


###### In a world of increasing threats to liberty, Brazukcoin brings a new front of resistance in the form of **financial freedom**.

###### Brazukcoin is based on the time tested **blockchain** technology, and also has extreme **privacy** features in its Cryptonote algorithm.

###### The code is (and will always remain) free and **open-source**!




###### **Specifications:**


- Ticker: BZK
- NO Pre-mine
- Mining algorithm: CryptoNight (it enables a truly anonymous and decentralized blockchain-based currency)
- Max supply: 10 million coins (+ tail emission ~1% yearly)
- Block reward: Initial reward of ~38 BZK
- Block target time: Around 4 minutes
- Difficulty: Retargets at every block
- Low transaction fee: 0.0001 BZK
- P2P Port: 44044
- Rpc Port: 44043




###### **Website:**


[**http://www.brazukcoin.space**](**http://www.brazukcoin.space**)




###### **Mining Pools:**


[**http://bzk.hpool.net**](**http://bzk.hpool.net**)

[**http://pool.brazukcoin.space**](**http://pool.brazukcoin.space**)




###### **Block Explorer:**


[**http://block.brazukcoin.space**](**http://block.brazukcoin.space**)


*Thanks katorisenko!*




###### **Get your Brazuk wallet here:**


Install the pre-compiled executables for **Windows**:

[**https://github.com/brazukcoin/brazukcoin/releases/**](**https://github.com/brazukcoin/brazukcoin/releases/**)


- Download the .zip archive.
- Extract the files.
- Run brazukcoind.exe (to sync the blockchain) and let it running.
- Run simplewallet.exe to create your wallet.
- type 'help' (no quotes) for further instructions on how to mine, transfer money, get your private key, etc.

**Important: Write down the seed information on paper, protect your *.wallet file, and never forget your password!**




###### You can also compile directly from the source code:


**On Linux:**

1 - Build your environment:
```
~$ sudo apt-get update ~$ sudo apt-get install build-essential git cmake libboost-all-dev
```

2 - Download Brazukcoin's source code:
```
~$ git clone https://github.com/brazukcoin/brazukcoin.git
```

3 - Build the binaries:
```
~$ cd brazukcoin ~/brazukcoin$ make
```

4 - Sync the blockchain:
```
~/brazukcoin$ cd build/release/src/ ~/brazukcoin/build/release/src$ ./brazukcoind --log-level=3
```

5 - Create your wallet (run 'simplewallet' on a new terminal because you need the brazukcoin daemon running):
```
~/brazukcoin/build/release/src$ ./simplewallet
```
IMPORTANT: Don't forget you password! Write down you seed information, your private keys, and keep your *.wallet file safe, or you might lose your money!

6 - Start mining your coins:
```
type 'start_mining' (no quotes).

For more commands, type 'help'
```


**On Windows:**


1 - Install Microsoft Visual Studio Community 2013
```
https://www.visualstudio.com/en-us/news/releasenotes/vs2013-community-vs
Click on 'Download Older Version' and then on 'Visual Studio Community with Update 5'

Note: You'll have to create a free account with Microsoft MSDN to proceed with the download.
```

2 - Install the latest CMake
```
https://cmake.org/download

During installation choose 'Add cmake to your system path',
```

3 - Download and compile Boost 5.7.0 C++ Libraries
```
https://sourceforge.net/projects/boost/files/boost/1.57.0/boost_1_57_0.zip/download

Extract the zip archive.

Compile Boost 5.7.0

Run Windows command prompt ('cmd')

'cd' to where you extracted boost__1_57_0

Run 'bootstrap.bat'

Run 'b2 --toolset=msvc variant=release link=static threading=multi runtime-link=static address-model=64'
```

4 - Install Git distributed version control system
```
https://git-scm.com/download/win
```

5 - Download brazukcoin source code to your computer
```
Run 'git shell' or 'git bash'
```
Clone repository
type 'git clone https://github.com/brazukcoin/brazukcoin.git'
```

Now finally compile Brazukcoin!
```
cd brazukcoin
mkdir build -- Create 'build' directory.
cd build    -- Change to build Directory.
cmake -G "Visual Studio 12 Win64" -DBOOST_ROOT=c:\boost_1_57_0 -DBOOST_LIBRARY_DIR=c:\boost_1_57_0\stage\lib ..
msbuild Brazukcoin.sln /p:Configuration=release
```

Done! Find you binaries in ..\brazukcoin\build\src\release\



**Good luck!**

