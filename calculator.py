import sys
from PyQt5.QtWidgets import QApplication, QWidget, QMainWindow, QLabel, QPushButton, QMessageBox, QLineEdit, QBoxLayout
from PyQt5.QtGui import QIcon
import os
import pandas as pd

def dialog0():
  inbox = ID.text()
  new_num = str(0)
  inbox +=new_num

if __name__ == "__main__":
  app = QApplication(sys.argv)
  calc = QMainWindow()
  calc.resize(800,600)
  calc.setWindowTitle("Xalculator")
  calc.setWindowIcon(QIcon("keys.png"))

  ID = QLineEdit(calc)
  ID.move(180,10)
  ID.resize(600, 80)
  ID.show

  btnclr = QPushButton(calc)
  btnclr.setText('clr')
  btnclr.show()
  btnclr.resize(80,80)
  btnclr.move(20,120)
  btnclr.clicked.connect(dialog0)

  btndel = QPushButton(calc)
  btndel.setText('del')
  btndel.show()
  btndel.resize(80,80)
  btndel.move(120,120)
  btndel.clicked.connect(dialog0)

  btn_plus = QPushButton(calc)
  btn_plus.setText('+')
  btn_plus.show()
  btn_plus.resize(80,80)
  btn_plus.move(220,120)
  btn_plus.clicked.connect(dialog0)

  btn_minus = QPushButton(calc)
  btn_minus.setText('-')
  btn_minus.show()
  btn_minus.resize(80,80)
  btn_minus.move(320,120)
  btn_minus.clicked.connect(dialog0)

  btn_mult = QPushButton(calc)
  btn_mult.setText('×')
  btn_mult.show()
  btn_mult.resize(80,80)
  btn_mult.move(320,220)
  btn_mult.clicked.connect(dialog0)

  btn_div = QPushButton(calc)
  btn_div.setText('/')
  btn_div.show()
  btn_div.resize(80,80)
  btn_div.move(320,320)
  btn_div.clicked.connect(dialog0)

  btn0 = QPushButton(calc)
  btn0.setText('0')
  btn0.show()
  btn0.resize(80,80)
  btn0.move(320,420)
  btn0.clicked.connect(dialog0)

  btn1 = QPushButton(calc)
  btn1.setText('1')
  btn1.show()
  btn1.resize(80,80)
  btn1.move(20,220)
  btn1.clicked.connect(dialog0)

  btn2 = QPushButton(calc)
  btn2.setText('2')
  btn2.show()
  btn2.resize(80,80)
  btn2.move(120,220)
  btn2.clicked.connect(dialog0)

  btn3 = QPushButton(calc)
  btn3.setText('3')
  btn3.show()
  btn3.resize(80,80)
  btn3.move(220,220)
  btn3.clicked.connect(dialog0)

  btn4 = QPushButton(calc)
  btn4.setText('4')
  btn4.resize(80,80)
  btn4.move(20,320)
  btn4.show()
  btn4.clicked.connect(dialog0)

  btn5 = QPushButton(calc)
  btn5.setText('5')
  btn5.show()
  btn5.resize(80, 80)
  btn5.move(120,320)
  btn5.clicked.connect(dialog0)

  btn6 = QPushButton(calc)
  btn6.setText('6')
  btn6.show()
  btn6.resize(80,80)
  btn6.move(220,320)
  btn6.clicked.connect(dialog0)

  btn7 = QPushButton(calc)
  btn7.setText('7')
  btn7.show()
  btn7.resize(80,80)
  btn7.move(20,420)
  btn7.clicked.connect(dialog0)

  btn8 = QPushButton(calc)
  btn8.setText('8')
  btn8.show()
  btn8.resize(80,80)
  btn8.move(120,420)
  btn8.clicked.connect(dialog0)

  btn9 = QPushButton(calc)
  btn9.setText('9')
  btn9.show()
  btn9.resize(80,80)
  btn9.move(220,420)
  btn9.clicked.connect(dialog0)

  calc.show()
  sys.exit(app.exec_())