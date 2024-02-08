программа читает список видеопотоков из файла "videostreams.txt". Каждая строка файла должна содержать путь к видеопотоку. Затем программа формирует и выполняет команды ffmpeg для трансляции каждого потока в сеть.

Для работы программы потребуется ffmpeg, скачать можно отсюда:
https://ffmpeg.org/
Инструкция по установке ffmpeg:
https://www.youtube.com/watch?v=2eSRuadzJxA

Компилятор можно скачать отсюда:
https://jmeubank.github.io/tdm-gcc/download/
или отсюда:
https://www.embarcadero.com/free-tools/dev-cpp

Для проверки установлен ли компилятор, ввести в командную строку:
g++ -v

Для компиляции программы: перейти в каталог с исходником и ввести в командную строку:

Linux:
g++ -std=c++11 -o ffrtmp ffrtmp.cpp

Win:
g++ -std=c++11 -o ffrtmp.exe ffrtmp.cpp


