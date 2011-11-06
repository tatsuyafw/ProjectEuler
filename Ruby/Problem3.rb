# Project Euler / Problem3

include Math

def calcPrimeFactors num
  res = []
  2.step(sqrt(num).truncate, 1) { |i|
    if num % i == 0
      res.push(i)
      while num % i == 0
        num /= i
      end
    end
  }
  return res
end

NUM = 600851475143

puts calcPrimeFactors(NUM).last

