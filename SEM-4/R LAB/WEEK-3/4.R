# Dataframes is used to represent data in the form of table
# just like rows and cols

id = c(1, 2, 3, 4, 5)
name = c("Pavan", "Hari", "Giri", "Mani", "Vishnu")
cgpa = c(8.3, 8.9, 9.2, 7.8, 8.5)

DF <- data.frame(id, name, cgpa)
DF

# another way of crating same
new_df = data.frame(roll=id, std_name=name, std_cgpa = cgpa)
print(new_df)

# functions
print(paste("No.of rows:", nrow(new_df)))

print(dim(new_df)) # gives rows and col count

print(names(new_df)) # gives all col names

# prints first 6 rows
print(head(new_df))
print(head(new_df, 2)) # gives only first 2 
print(tail(new_df, 2))
class(new_df)

print(new_df$std_name) # accessing individual col using $ sign
print(new_df[1, 2]) # 1 row 2nd col data will be printed
print(new_df[5, 3])





