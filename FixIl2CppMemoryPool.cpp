//
//  FixIl2CppMemoryPool.cpp
//  UnityFramework
//
//  Created by Tao Wang on 17.10.25.
//

extern "C" {
    size_t il2cpp_memory_pool_get_region_size() {
        return 0; // safe fallback
    }
    void il2cpp_memory_pool_set_region_size(size_t) {
        // no-op
    }
}
