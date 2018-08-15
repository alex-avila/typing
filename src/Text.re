type state = {
    lettersCorrect: int,
};

type action =
  | KeyDown;

let component = ReasonReact.reducerComponent("Text");

let make = (~paragraph, _children) => {
    ...component,

    initialState: () => {lettersCorrect: 0},

    reducer: (action, state) => {
        switch (action) {
        | KeyDown => ReasonReact.Update({...state, lettersCorrect: state.lettersCorrect + 1})
        };
    },

    render: self => {
        <div
            onKeyPress={_event => self.send(KeyDown)}
            tabIndex=0
        >
            <p>(ReasonReact.string(paragraph))</p>
            <span>(ReasonReact.string(string_of_int(self.state.lettersCorrect)))</span>
        </div>;
    },
};