import unittest
from lib.mycalc import add
from lib.mycalc import sub

class testSum(unittest.TestCase):
    def test_sum(self):
        self.assertEqual(add(10,20),30)
    def test_sum_negative(self):
        self.assertEqual(add(-10,-20),-30)

class testSub(unittest.TestCase):
    def test_sum(self):
        self.assertEqual(sub(30,20),10)
    def test_sum_negative(self):
        self.assertEqual(sub(-10,-20),10)

if __name__ == "__main__":
    unittest.main()