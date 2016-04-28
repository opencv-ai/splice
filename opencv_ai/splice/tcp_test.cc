#include <opencv_ai/splice/tcp.h>

#include <gtest/gtest.h>
namespace opencv_ai {

TEST(Tcp, Smoke) {
  Context ctx;
  BufferClient client(ctx, "localhost", "8000",
                      [](size_t stamp, const std::vector<char>& buffer) {
                        std::cout << stamp << " " << buffer.size() << std::endl;
                      });
  // TODO make test.
  // ctx.Run();
}
}
