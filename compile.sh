g++ -lstdc++ \
    -o blockchain_exec \
    -std=c++11 \
    -stdlib=libc++ \
    main.cpp Block.cpp Blockchain.cpp sha256.cpp

clear
./blockchain_exec