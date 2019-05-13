import unittest
import cppdemo

class TestCppDemo(unittest.TestCase):

    def test_concat_str(self):
        self.assertEqual('a-b', cppdemo.ConcatStr('a', 'b', delimiter='-'))
        self.assertEqual('a,b', cppdemo.ConcatStr('a', 'b'))


if __name__ == '__main__':
    unittest.main()
