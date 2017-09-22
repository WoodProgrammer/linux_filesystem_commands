require 'bitarray'
require 'zlib'
LEN = 100
@bloom = BitArray.new(LEN)
datas = ["Hebele","hubele","lebele","ads"]
def is_exist(data)

    crc32 = Zlib::crc32(data)
    if crc32 > LEN 
        new_line = crc32.to_i%LEN

    else
        new_line = crc32
    end
    if @bloom[new_line]== 1
        "Maybe Exist ! "
    else
        "Not "
    end

end

datas.each do |data|
    crc32 = Zlib::crc32(data)
    if crc32.to_i > LEN
        new_len = crc32.to_i%LEN
        @bloom[new_len] = 1 

    else 
        @bloom[key]=1
    end

end
datas = ["Hebele","hubele","lebele","ads","jakla"]

p @bloom.to_s


datas.each do |data| 
    p is_exist(data)

end