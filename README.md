# Guava

This is a library with a fast and minimal memory-consuming hashing function also known as Jump [Consistent Hash](https://en.wikipedia.org/wiki/Consistent_hashing) from the original work "A Fast, Minimal Memory, Consistent Hash Algorithm" by Google (see [1406.2294v1.pdf](https://arxiv.org/pdf/1406.2294v1.pdf)).

> In comparison to the algorithm of Karger et al., jump consistent hash requires no storage, is faster, and does a better job of evenly dividing the key
space among the buckets and of evenly dividing the workload when the number of buckets changes.

## Installation

Add this to your application's `shard.yml`:

```yaml
dependencies:
  guava:
    github: creadone/guava
    version: "~> 0.1.0"
```

Then run `shards install`.

## Usage

```crystal
require "guava"

Guava.jump(7234672323_u64, 12_i32) # => 9
```

## Contributing

1. Fork it (https://github.com/creadone/guava/fork)
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -am 'Add some feature'`)
4. Push to the branch (`git push origin my-new-feature`)
5. Create a new Pull Request

## Contributors

- [creadone](https://github.com/creadone) - creator and maintainer
