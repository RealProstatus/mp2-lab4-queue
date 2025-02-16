#include"gtest.h"
#include"../mp2-lab4-queue/LLQueue.h"

TEST(LLQueue, can_create_queue) {
	ASSERT_NO_THROW(LLQueue<int> q);
}

TEST(LLQueue, can_create_copied_queue) {
	LLQueue<int> q1;
	ASSERT_NO_THROW(LLQueue<int> q2(q1));
}

TEST(LLQueue, copied_queue_has_its_own_memory) {
	LLQueue<int> q1;
	LLQueue<int> q2(q1);
	q1.push(1);
	EXPECT_TRUE(q2.isEmpty());
}

TEST(LLQueue, created_queue_is_empty) {
	LLQueue<int> q1;
	EXPECT_TRUE(q1.isEmpty());
}

TEST(LLQueue, cant_front_from_empty_queue) {
	LLQueue<int> q1;
	ASSERT_ANY_THROW(q1.front());
}

TEST(LLQueue, cant_back_from_empty_queue) {
	LLQueue<int> q1;
	ASSERT_ANY_THROW(q1.back());
}

TEST(LLQueue, can_push_in_queue) {
	LLQueue<int> q1;
	ASSERT_NO_THROW(q1.push(2531));
}

TEST(LLQueue, can_front_in_queue) {
	LLQueue<int> q1;
	q1.push(2531);
	ASSERT_NO_THROW(q1.front());
}

TEST(LLQueue, can_back_in_queue) {
	LLQueue<int> q1;
	q1.push(2531);
	ASSERT_NO_THROW(q1.back());
}

TEST(LLQueue, front_and_back_is_the_same_in_one_node_queue) {
	LLQueue<int> q1;
	q1.push(2531);
	EXPECT_EQ(q1.front(), q1.back());
}

TEST(LLQueue, cant_pop_from_empty_queue) {
	LLQueue<int> q1;
	ASSERT_ANY_THROW(q1.pop());
}

TEST(LLQueue, created_queue_is_not_full) {
	LLQueue<int> q1;
	EXPECT_FALSE(q1.isFull());
}

TEST(LLQueue, equal_test) {
	LLQueue<int> q1, q2;
	for (int i = 0; i < 5; i++) {
		q1.push(i);
		q2.push(i);
	}
	EXPECT_EQ(q1, q2);
}