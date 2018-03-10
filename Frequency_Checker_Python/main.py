
def frequency_counter(sample_list):
    check_list = sample_list
    j = 0
    counter = 0
    hold = []
    element = None
    while j < len(sample_list):
        for x in check_list:
            if(sample_list[j] == x):
                counter += 1
                element = sample_list[j]
        if(sample_list[j] not in hold):
            print('{} appears {} times in the list'.format(sample_list[j],counter))
        counter = 0
        hold.append(sample_list[j])
        j += 1
        

# Example for testing
# Create your own list and test !
        
my_list = ['a','b','a','c','b',3,3,5,2,56,89]

frequency_counter(my_list)
