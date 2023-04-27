@[Link(ldflags: "#{__DIR__}/jump.o")]
lib LibGuava
  fun jump = jump_consistent_hash(name : UInt64, num_buckets : Int32) : Int32
end