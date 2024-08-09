
#include <torch/torch.h>
#include <iostream>

torch::Tensor torch_eye(int N) {
  torch::Tensor tensor = torch::eye(N);
  return tensor;
}