require "./lib/lib_guava"

module Guava
  def self.jump(name : UInt64, buckets : Int32) : Int32
    LibGuava.jump(name, buckets)
  end
end