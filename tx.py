import socket
import time

HOST = '127.0.0.1'
PORT = 6767

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect((HOST, PORT))

while True:
    client.sendall(b'1')
    time.sleep(2)

    client.sendall(b'0')
    time.sleep(2)