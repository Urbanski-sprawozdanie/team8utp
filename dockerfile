FROM ubuntu:latest
MAINTAINER Adam Wencka
RUN apt-get update && apt-get install -y git
RUN apt-get install g++ -y
RUN eval "$(ssh-agent -s)"

RUN git clone https://github.com/AdamWencka/team8utp.git /app
RUN g++ /app/calc.cpp

