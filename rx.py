import socket

HOST = '127.0.0.1'
PORT = 6767

server = socket.socket()
server.bind((HOST, PORT))
server.listen(1)

print("wating for connection...")

conn, addr = server.accept()
print(f"connected by {addr}")