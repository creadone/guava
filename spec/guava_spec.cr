require "./spec_helper"

describe Guava do
  it "It should eq" do
    result = Guava.jump(7234672323_u64, 12_i32) == LibGuava.jump(7234672323_u64, 12_i32)
    result.should eq(true)
  end
end
