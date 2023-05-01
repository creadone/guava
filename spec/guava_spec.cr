require "./spec_helper"

describe Guava do
  it "It should eq" do
    result = Guava.jump(7234672323_u64, 12_i32) == Guava.jump(7234672323_u64, 12_i32)
    result.should eq(true)
  end

  it "It should return 9" do
    result = Guava.jump(7234672323_u64, 12_i32)
    result.should eq(9)
  end

  it "It should return the same bucket number for the same hash code for different numbers of buckets" do
    Guava.jump(7234672323_u64, 10_i32).should eq(9)
    Guava.jump(7234672323_u64, 11_i32).should eq(9)
    Guava.jump(7234672323_u64, 12_i32).should eq(9)
  end
end
