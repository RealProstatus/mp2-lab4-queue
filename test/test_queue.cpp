#include"gtest.h"
#include"../mp2-lab4-queue/TQueue.h"

TEST(TQueue, can_create_queue_with_positive_length) {
	ASSERT_NO_THROW(TQueue<int> q(10));
}

TEST(TQueue, cant_create_queue_with_negative_length) {
	ASSERT_ANY_THROW(TQueue<int> q(-10));
}

TEST(TQueue, cant_create_queue_with_zero_length) {
	ASSERT_ANY_THROW(TQueue<int> q(0));
}

TEST(TQueue, can_create_copied_queue) {
	TQueue<int> q1;
	ASSERT_NO_THROW(TQueue<int> q2(q1));
}

TEST(TQueue, copied_queue_has_its_own_memory) {
	TQueue<int> q1;
	TQueue<int> q2(q1);
	q1.push(1);
	EXPECT_TRUE(q2.isEmpty());
}

TEST(TQueue, created_queue_is_empty) {
	TQueue<int> q1;
	EXPECT_TRUE(q1.isEmpty());
}

TEST(TQueue, filled_queue_is_full) {
	TQueue<int> q1(5);
	for (int i = 0; i < 5; i++)
		q1.push(i);
	EXPECT_TRUE(q1.isFull());
}

TEST(TQueue,cant_front_from_empty_queue) {
	TQueue<int> q1(5);
	ASSERT_ANY_THROW(q1.front());
}

TEST(TQueue, cant_back_from_empty_queue) {
	TQueue<int> q1(5);
	ASSERT_ANY_THROW(q1.back());
}

TEST(TQueue, can_front_from_filled_queue) {
	TQueue<int> q1(5);
	q1.push(2531);
	ASSERT_NO_THROW(q1.front());
	EXPECT_EQ(2531, q1.front());
}

TEST(TQueue, can_back_from_filled_queue) {
	TQueue<int> q1(5);
	q1.push(2531);
	q1.push(2532);
	ASSERT_NO_THROW(q1.back());
	EXPECT_EQ(2532, q1.back());
}

TEST(TQueue, can_push_in_queue) {
	TQueue<int> q1(5);
	ASSERT_NO_THROW(q1.push(2531));
}

TEST(TQueue, can_pop_in_queue) {
	TQueue<int> q1(5);
	q1.push(2531);
	ASSERT_NO_THROW(q1.pop());
}

TEST(TQueue, cant_push_in_full_queue) {
	TQueue<int> q1(5);
	for (int i = 0; i < 5; i++)
		q1.push(i);
	ASSERT_ANY_THROW(q1.push(2531));
}

TEST(TQueue, cant_pop_from_empty_queue) {
	TQueue<int> q1(5);
	ASSERT_ANY_THROW(q1.pop());
}

TEST(TQueue, queue_is_equal_to_itself) {
	TQueue<int> q1(5);
	EXPECT_TRUE(q1 == q1);
}
TEST(TQueue, copied_queue_is_equal_to_its_source_queue) {
	TQueue<int> q1(5);
	TQueue<int> q2(q1);
	EXPECT_TRUE(q1 == q2);
}

TEST(TQueue, queues_with_different_count_of_values_are_not_equal) {
	TQueue<int> q1(5);
	q1.push(1);
	TQueue<int> q2(10);
	q2.push(1);
	q2.push(2);
	EXPECT_NE(q1,q2);
}

TEST(TQueue, queues_with_different_places_of_values_are_equal) {
	TQueue<int> q1(5);
	for (int i = 1; i <= 5; i++)
		q1.push(i);
	q1.pop();
	q1.pop();
	TQueue<int> q2(10);
	for (int i = 3; i <= 5; i++)
		q2.push(i);
	EXPECT_TRUE(q1 == q2);
}

TEST(TQueue, testing_eq_operator_with_circle_buffer) {
	TQueue<int> q1(5);
	for (int i = 1; i <= 5; i++)
		q1.push(i);
	q1.pop();
	q1.pop();
	q1.pop();
	q1.push(6);
	q1.push(7);
	TQueue<int> q2(10);
	for (int i = 4; i <= 7; i++)
		q2.push(i);
	EXPECT_TRUE(q1 == q2);
}
