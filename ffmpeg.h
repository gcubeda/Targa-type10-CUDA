
typedef struct rgbPixel {
    uint8_t r;
    uint8_t g;
    uint8_t b;
} RGBPixel;

typedef struct frame {
  int width;
  int height;
  RGBPixel *pixels;
} GeneralFrame;

GeneralFrame* importFrame();

void ffmpegMain(char const *videoPath);
