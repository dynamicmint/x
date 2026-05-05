import cv2

img = cv2.imread('circle.png', 0)
_, bw = cv2.threshold(img, 127, 255, 0)

shapes, _ = cv2.findContours(bw, 1, 2)

for s in shapes:
    corners = len(cv2.approxPolyDP(s, 10, True))
    
    if corners == 3:
        print("Triangle")
    elif corners == 4:
        print("Square")
    else:
        print("Circle")
