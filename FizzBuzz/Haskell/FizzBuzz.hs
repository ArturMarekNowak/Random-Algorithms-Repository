-- Based on a lecture: https://www.youtube.com/watch?v=1jZ7j21g028
fizzes = cycle [ "", "", "Fizz" ]
buzzes = cycle [ "", "", "", "", "Buzz" ]
pattern = zipWith (++) fizzes buzzes
combine word number = if null word then show number else word

fizzBuzz :: Int -> [String]
fizzBuzz n = zipWith combine pattern [1..n] 

main :: IO()
main = print(fizzBuzz 100)
