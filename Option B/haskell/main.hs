fact :: (Integer, Integer, Integer, Integer) -> Integer 
fact (rest, a, b, n) | rest < 0 = b 
                     | rest >= 0 = fact(n - a * 7 - b, a*6, b+a, n)
main = do 
    input1 <- getLine
    let x = (read input1 :: Integer)
    print (fact(x - 3, 2, 1, x))