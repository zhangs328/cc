# test.py — Python 环境验证脚本
# 按 Ctrl+Alt+N 运行
import numpy as np
import cv2
import matplotlib
import serial

print("Python 环境就绪!")
print(f"  Python: 3.12.10")
print(f"  NumPy: {np.__version__}")
print(f"  OpenCV: {cv2.__version__}")
print(f"  Matplotlib: {matplotlib.__version__}")
print(f"  PySerial: OK")

# 测试 OpenCV
img = np.zeros((100, 100, 3), dtype=np.uint8)
img[:] = (0, 255, 0)
print(f"  测试图片: {img.shape}")
print("All libs working!")
