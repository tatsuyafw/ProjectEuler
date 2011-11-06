# Project Euler / Problem2

def fibonacci
  num1 = 0
  num2 = 1
  while true   
    res = num1 + num2
    yield res
    num1 = num2
    num2 = res
  end  
end

LIMIT = 4 * (10 ** 6)

res = 0
puts LIMIT
fibonacci { |i|  
  puts i
  if i <= LIMIT
    if i % 2 == 0
      #puts i
      res += i
    end
  else 
    break
  end
}
puts res

