function  mdc  (x ,  y)
  local  r  =  x  %  y
  if  r  ==  0  then
    return  y
else
  return  mdc (y ,r)
 end 
end

print ( mdc (42 ,24))