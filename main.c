#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

#define INPUT_SIZE 784  // Number of input neurons
#define HIDDEN_SIZE 128 // Number of neurons in the hidden layer
#define HIDDEN_LAYER_SIZE 6 // Number of hidden layers
#define OUTPUT_SIZE 4084  // Number of output neurons
						  //
#define DATASET_SIZE 100000 // File count of the dataset
#define DATASET_DIR ""
#define BATCH_SIZE 32 // Stochatic batch
#define NUM_EPOCHS 1000
#define LEARNING_RATE 0.01

// Load batch into memory

// Defining the network
double input_layer[INPUT_SIZE];
double hidden_layer[HIDDEN_SIZE];
double output_layer[OUTPUT_SIZE];

double hidden_weights[INPUT_SIZE][HIDDEN_SIZE];
double output_weights[HIDDEN_SIZE][OUTPUT_SIZE];
double hidden_biases[HIDDEN_SIZE];
double output_biases[OUTPUT_SIZE];


// Sigmoid function
//double sigmoid(double x) { return 1.0 / (1.0 + exp(-x)); }
//double dSigmoid(double x) { return x * (1 - x); }
//double dSigmoid(double x) {
//	return sigmoid(x) * (1.0 - sigmoid(x));
//}

// Initialize the neural network (random values)
void initialize_network(){
	for(int i=0; i < INPUT_SIZE; i++){
		for(int j=0; j < HIDDEN_SIZE; j++){
			hidden_weights[i][j] = (double)rand() / RAND_MAX;
		}
	}
	for(int i=0; i < HIDDEN_SIZE; i++){
		for(int j=0; j < OUTPUT_SIZE; j++){
			output_weights[i][j] = (double)rand() / RAND_MAX;
		}
		hidden_biases[i] = (double)rand() / RAND_MAX;
	}
	for(int i=0; i < OUTPUT_SIZE; i++){
		output_biases[i] = (double)rand() / RAND_MAX;
	}
}


void load_batch() {
	// Load dataset*batchsize
}


void forward_propagation(int index) {
	// Input layer propagation
	// Hidden layer propagation
	// Output layer propagation
}



void backward_propagation(int index) {
    // Calculate deltas for the output layer
    // Calculate deltas for the hidden layer
    // Update output layer weights and biases
    // Update hidden layer weights and biases
}


int main() {
	initialize_network();
    return 0;
}

