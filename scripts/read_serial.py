#!/usr/bin/python
# -*- coding: iso-8859-1 -*-

# Importing Libraries
import serial

arduino = serial.Serial(port='/dev/ttyUSB0', baudrate=9600, timeout=.1)

chart_name = str(input("Enter the name of the chart: "))
chart_file = open('../output/' + chart_name + '.txt', 'w')

while True:
    if (arduino.inWaiting()):
        data = arduino.readline()
        cured_data = data.decode('ascii', 'ignore').strip()
        chart_file.write(cured_data + '\r\n')
        print(cured_data)
