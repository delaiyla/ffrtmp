#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    std::ifstream inputFile("videostreams.txt");
    if (!inputFile) {
        std::cerr << "Failed to open input file" << std::endl;
        return 1;
    }

    std::string stream;
    while (std::getline(inputFile, stream)) {
        std::string command = "ffmpeg -hide_banner -re -fflags +genpts -stream_loop -1 -i " +
                              stream + " -c copy -vsync 1 -tune zerolatency -f flv " +
                              "rtmp://212.119.243.135/" + stream.substr(stream.find_last_of("/") + 1) +
                              " -indexmem 512 -rtbufsize 64K -probesize 512 -analyzeduration 0 " +
                              "-thread_queue_size 2048 -avoid_negative_ts \"make_zero\"";

        // Execute the ffmpeg command
        system(command.c_str());
    }

    inputFile.close();

    return 0;
}