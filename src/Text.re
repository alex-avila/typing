type state = {
    lettersCorrect: int,
    beginning: string,
    ending: string,
    position: int,
};

type action =
  | KeyDown;

let component = ReasonReact.reducerComponent("Text");

let make = (~paragraph, _children) => {
    ...component,

    initialState: () => {
        lettersCorrect: 0,
        beginning: "",
        ending: paragraph,
        position: 0
    },

    reducer: (action, state) => {
        switch (action) {
        | KeyDown => ReasonReact.Update({...state, lettersCorrect: state.lettersCorrect + 1})
        };
    },

    render: self => {
        <div
            onKeyPress={event => self.send(KeyDown)}
            tabIndex=0
            style=(ReactDOMRe.Style.make(~fontFamily="Gill Sans", ~fontSize="20px", ()))
        >
            <p>
                <span>(ReasonReact.string(self.state.beginning))</span>
                <span>(ReasonReact.string(self.state.ending))</span>
            </p>
            <span>(ReasonReact.string(string_of_int(self.state.lettersCorrect)))</span>
        </div>;
    },
};