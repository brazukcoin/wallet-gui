
![Image of Brazukcoin New GUI Wallet](https://i.imgur.com/fFoTr8y.png)


### How To Compile for Linux (Windows and Mac instructions soon)


##### Prerequisites

- You will need the following packages: boost (1.58 or higher), QT Library (5.9.0 orhigher) cmake, git, gcc (4.9 or higher), g++ (4.9 or higher), make. Most of these should already be installed on your system.

- For example on ubuntu: `sudo apt-get install build-essential qtbase5-dev gcc g++ git cmake libboost-all-dev `

- After this you can compile Brazukcoin.



**1. Download GUI wallet source code**

```
git clone https://github.com/brazukcoin/brazukcoinwallet.git
```

**2. Update from main wallet**

```
$ cd brazukcoinwallet
$ git submodule update --init
$ git submodule foreach git pull origin master
```

**3. Build**

```
$ mkdir -p build
$ cd build
$ cmake ..
$ make
```

**4. Run your new wallet**

```
$ ./Brazukcoin
```



**Enjoy!**

