#include <sw/redis++/redis++.h>

int main() {
  using namespace sw::redis;
  ConnectionOptions opts;
  opts.host = "127.0.0.1";
  opts.port = 4242;
  Redis redis(opts);
  return 0;
}
