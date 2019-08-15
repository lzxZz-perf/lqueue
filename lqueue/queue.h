#ifndef LZX_LQUEUE_H_
#define LZX_LQUEUE_H_

namespace lzx::lqueue{

/**
 * @brief 无锁队列
 * 
 */
template<typename E>
class LQueue{

public:
    /**
     * @brief 出队可能遇见队列为空的情况, 返回一个result包装.
     * 
     */
    void Dequeue();
    /**
     * @brief 将指针入队, 内存的释放由队列进行管理
     * 
     */
    void Enqueue(E*);
};


}

#endif //LZX_LQUEUE_H_