import serial

port = '/dev/ttyUSB0'
baudrate = 115200
wait_time = 2

# opens a serial connection
with serial.Serial(port, baudrate, timeout=wait_time) as ser:
    while True:
        inp = input('Enter command : ')
        # write the string, as bytes over the serial connection
        ser.write(bytes(inp, 'utf-8'))
