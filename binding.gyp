{
  "targets": [
    {
      "target_name": "vulkan",
      "sources": [ "src/vulkan.cc" ],
      "conditions": [
        ["OS==\"linux\"", {
          "cflags_cc": [ "-fpermissive", "-Os" ]
        }]
      ]
    }
  ]
}
