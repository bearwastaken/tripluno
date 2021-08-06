#address is a dummy address for testing
import serial
arduino = serial.Serial("COM4",timeout=1, baudrate=9600)
send = serial.Serial("COM4", 9600)
output = ""
while True:
    print(str(arduino.readline().decode()))
    output = str(arduino.readline().decode())
    send.write("ARD9F98G7G6G5")
