package com.app.insipirationalquotes

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.Alignment
import androidx.compose.ui.draw.clip
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.unit.sp

import com.app.insipirationalquotes.ui.theme.INSIPIRATIONALQUOTESTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {
            Surface(
                modifier = Modifier.fillMaxSize(),
                color = MaterialTheme.colorScheme.background
            ) {
                QuotationApp()
            }

        }
    }
}

@Composable
fun QuotationApp( modifier: Modifier = Modifier) {
    var button by remember { mutableStateOf( false) }
    var count by remember { mutableIntStateOf( 0) }
    // use when to switch images to a given range when we click a button
    val imageRes = when (count) {
        0 -> R.drawable.images1
        1 -> R.drawable.images2
        2 -> R.drawable.images3
        3 -> R.drawable.images4
        4 -> R.drawable.images5
        5 -> R.drawable.images6
        6 -> R.drawable.images7
        else -> null
    }

    Box(modifier = Modifier.background(color = Color.Cyan)) {
        Column(
            modifier = Modifier
                .fillMaxSize()
                .align(Alignment.Center)
                .padding(16.dp),
            verticalArrangement = Arrangement.Center,
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            //to hide button when we click it
            // this will show the below text when button is not clicked and when is clicked it disappear
            if (!button) {
                Text(
                    text = "READ YOUR QUOTE TODAY",
                    fontSize = 25.sp,
                    modifier = Modifier.padding(bottom = 16.dp)
                )
                Button(onClick = { button = true }) {
                    Text(
                        text = "START",
                        modifier = Modifier.padding(5.dp),
                        fontSize = 15.sp

                    )

                }
            }
            //when button is clicked, the below codes will be shown on the emulator
            if (button) {

                Column(
                    modifier = Modifier.fillMaxWidth(),

                ) {
                    //check if not null so as to pass pictures respectively with quotes
                    if (imageRes != null) {
                        //add image using image composable
                        Image(
                            painter = painterResource(imageRes),
                            contentDescription = null,
                            contentScale = ContentScale.Crop,
                            //to align centre
                            modifier = Modifier.align(Alignment.CenterHorizontally)
                                //clip for rounded corners
                                .clip(
                                RoundedCornerShape(100.dp)
                            )
                        )
                    }
                    Text(
                        //to allow when we click button to change quotes dynamically using when
                        text = when (count) {
                            0 -> "The greatest glory in living lies not in never falling, but in rising every time we fall.\n\t\t\t\t\t\t\t Nelson Mandela"
                            1 -> "Your time is limited, so don't waste it living someone else's life. Don't be trapped by dogma – which is living with the results of other people's thinking.\n" +
                                    "\t\t\t\t\t\t\t Steve Jobs"

                            2 -> "If you look at what you have in life, you'll always have more. If you look at what you don't have in life, you'll never have enough" +
                                    "\n\t\t\t\t\t\t\t Oprah Winfrey"

                            3 -> "You may say I'm a dreamer, but I'm not the only one. I hope someday you'll join us. And the world will live as one.\n" +
                                    "\t\t\t\t\t\t\t John Lennon"

                            4 -> "If you set your goals ridiculously high and it's a failure, you will fail above everyone else's success.\n" +
                                    "\t\t\t\t\t\t\t James Cameron"

                            5 -> "The future belongs to those who believe in the beauty of their dreams.\n\t\t\t\t\t\t\t Eleanor Roosevelt"
                            6 -> "It is during our darkest moments that we must focus to see the light.\n\t\t\t\t\t\t\t Aristote"
                            else -> "\t\t\t\t\t\t\t\t\tTHANK YOU!"
                        },
                        modifier = Modifier.padding( 20.dp)
                            .background(color = Color.White)
                            .padding(16.dp)
                            .fillMaxWidth(),
                        fontSize = 20.sp
                    )
                   // to align button in one line
                    Row(
                        modifier = Modifier.fillMaxWidth(),
                        // This parameter centers the buttons horizontally within the Row
                        horizontalArrangement = Arrangement.Center
                    )  {
                        Button(
                            modifier = Modifier.padding(end = 20.dp),
                            // to check for number of count if they do not exceed the given range
                            onClick = { count = if (count < 0) 6 else count - 1 }) {
                            Text(text = "<<")
                        }
                        Button(onClick = { count = if (count > 6) 0 else count + 1 }) {
                            Text(text = ">>")
                        }
                    }
                }
            }
        }
    }

}

@Preview(showBackground = true)
@Composable
fun QuotationAppPreview() {
    INSIPIRATIONALQUOTESTheme {
        QuotationApp()
    }
}